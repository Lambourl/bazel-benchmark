#include "bench/fib.hpp"

// RE Benchmark TU 322 of 20000 (depth=28, stamp="default")
namespace bench_tu_322 {
constexpr unsigned long long result = ::bench::slow_fib<28, 322>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_322
