#include "bench/fib.hpp"

// RE Benchmark TU 15743 of 20000 (depth=28, stamp="default")
namespace bench_tu_15743 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15743>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15743
