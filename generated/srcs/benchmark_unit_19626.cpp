#include "bench/fib.hpp"

// RE Benchmark TU 19626 of 20000 (depth=28, stamp="default")
namespace bench_tu_19626 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19626>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19626
