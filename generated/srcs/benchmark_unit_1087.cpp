#include "bench/fib.hpp"

// RE Benchmark TU 1087 of 20000 (depth=28, stamp="default")
namespace bench_tu_1087 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1087>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1087
