#include "bench/fib.hpp"

// RE Benchmark TU 3743 of 20000 (depth=28, stamp="default")
namespace bench_tu_3743 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3743>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3743
