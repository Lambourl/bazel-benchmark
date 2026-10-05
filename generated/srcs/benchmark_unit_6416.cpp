#include "bench/fib.hpp"

// RE Benchmark TU 6416 of 20000 (depth=28, stamp="default")
namespace bench_tu_6416 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6416>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6416
