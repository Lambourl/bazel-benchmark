#include "bench/fib.hpp"

// RE Benchmark TU 12289 of 20000 (depth=28, stamp="default")
namespace bench_tu_12289 {
constexpr unsigned long long result = ::bench::slow_fib<28, 12289>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_12289
