#include "bench/fib.hpp"

// RE Benchmark TU 6279 of 20000 (depth=28, stamp="default")
namespace bench_tu_6279 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6279>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6279
