#include "bench/fib.hpp"

// RE Benchmark TU 10978 of 20000 (depth=28, stamp="default")
namespace bench_tu_10978 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10978>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10978
