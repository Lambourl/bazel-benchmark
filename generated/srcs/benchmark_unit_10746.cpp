#include "bench/fib.hpp"

// RE Benchmark TU 10746 of 20000 (depth=28, stamp="default")
namespace bench_tu_10746 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10746>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10746
