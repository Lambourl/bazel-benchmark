#include "bench/fib.hpp"

// RE Benchmark TU 17816 of 20000 (depth=28, stamp="default")
namespace bench_tu_17816 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17816>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17816
