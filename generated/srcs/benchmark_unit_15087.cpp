#include "bench/fib.hpp"

// RE Benchmark TU 15087 of 20000 (depth=28, stamp="default")
namespace bench_tu_15087 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15087>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15087
