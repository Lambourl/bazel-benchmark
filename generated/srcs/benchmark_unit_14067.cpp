#include "bench/fib.hpp"

// RE Benchmark TU 14067 of 20000 (depth=28, stamp="default")
namespace bench_tu_14067 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14067>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14067
