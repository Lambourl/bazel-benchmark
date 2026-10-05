#include "bench/fib.hpp"

// RE Benchmark TU 8183 of 20000 (depth=28, stamp="default")
namespace bench_tu_8183 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8183>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8183
