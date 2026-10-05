#include "bench/fib.hpp"

// RE Benchmark TU 9150 of 20000 (depth=28, stamp="default")
namespace bench_tu_9150 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9150>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9150
