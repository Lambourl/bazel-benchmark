#include "bench/fib.hpp"

// RE Benchmark TU 4902 of 20000 (depth=28, stamp="default")
namespace bench_tu_4902 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4902>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4902
