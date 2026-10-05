#include "bench/fib.hpp"

// RE Benchmark TU 2892 of 20000 (depth=28, stamp="default")
namespace bench_tu_2892 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2892>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2892
