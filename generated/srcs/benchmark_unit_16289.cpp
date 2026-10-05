#include "bench/fib.hpp"

// RE Benchmark TU 16289 of 20000 (depth=28, stamp="default")
namespace bench_tu_16289 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16289>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16289
