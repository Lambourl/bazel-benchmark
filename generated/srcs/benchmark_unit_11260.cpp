#include "bench/fib.hpp"

// RE Benchmark TU 11260 of 20000 (depth=28, stamp="default")
namespace bench_tu_11260 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11260>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11260
