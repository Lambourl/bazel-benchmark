#include "bench/fib.hpp"

// RE Benchmark TU 6771 of 20000 (depth=28, stamp="default")
namespace bench_tu_6771 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6771>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6771
