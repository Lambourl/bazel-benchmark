#include "bench/fib.hpp"

// RE Benchmark TU 4197 of 20000 (depth=28, stamp="default")
namespace bench_tu_4197 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4197>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4197
