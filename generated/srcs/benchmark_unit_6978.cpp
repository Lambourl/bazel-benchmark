#include "bench/fib.hpp"

// RE Benchmark TU 6978 of 20000 (depth=28, stamp="default")
namespace bench_tu_6978 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6978>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6978
