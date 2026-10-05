#include "bench/fib.hpp"

// RE Benchmark TU 816 of 20000 (depth=28, stamp="default")
namespace bench_tu_816 {
constexpr unsigned long long result = ::bench::slow_fib<28, 816>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_816
