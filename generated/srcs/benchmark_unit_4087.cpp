#include "bench/fib.hpp"

// RE Benchmark TU 4087 of 20000 (depth=28, stamp="default")
namespace bench_tu_4087 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4087>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4087
