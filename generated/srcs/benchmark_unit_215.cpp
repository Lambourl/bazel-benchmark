#include "bench/fib.hpp"

// RE Benchmark TU 215 of 20000 (depth=28, stamp="default")
namespace bench_tu_215 {
constexpr unsigned long long result = ::bench::slow_fib<28, 215>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_215
