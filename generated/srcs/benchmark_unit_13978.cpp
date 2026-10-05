#include "bench/fib.hpp"

// RE Benchmark TU 13978 of 20000 (depth=28, stamp="default")
namespace bench_tu_13978 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13978>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13978
