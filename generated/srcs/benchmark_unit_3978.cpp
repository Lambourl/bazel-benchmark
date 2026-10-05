#include "bench/fib.hpp"

// RE Benchmark TU 3978 of 20000 (depth=28, stamp="default")
namespace bench_tu_3978 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3978>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3978
