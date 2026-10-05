#include "bench/fib.hpp"

// RE Benchmark TU 6986 of 20000 (depth=28, stamp="default")
namespace bench_tu_6986 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6986>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6986
