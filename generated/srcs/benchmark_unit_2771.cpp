#include "bench/fib.hpp"

// RE Benchmark TU 2771 of 20000 (depth=28, stamp="default")
namespace bench_tu_2771 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2771>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2771
