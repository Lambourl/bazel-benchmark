#include "bench/fib.hpp"

// RE Benchmark TU 796 of 20000 (depth=28, stamp="default")
namespace bench_tu_796 {
constexpr unsigned long long result = ::bench::slow_fib<28, 796>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_796
