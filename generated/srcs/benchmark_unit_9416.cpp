#include "bench/fib.hpp"

// RE Benchmark TU 9416 of 20000 (depth=28, stamp="default")
namespace bench_tu_9416 {
constexpr unsigned long long result = ::bench::slow_fib<28, 9416>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_9416
