#include "bench/fib.hpp"

// RE Benchmark TU 19284 of 20000 (depth=28, stamp="default")
namespace bench_tu_19284 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19284>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19284
