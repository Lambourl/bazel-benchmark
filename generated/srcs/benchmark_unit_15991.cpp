#include "bench/fib.hpp"

// RE Benchmark TU 15991 of 20000 (depth=28, stamp="default")
namespace bench_tu_15991 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15991>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15991
