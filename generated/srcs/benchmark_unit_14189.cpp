#include "bench/fib.hpp"

// RE Benchmark TU 14189 of 20000 (depth=28, stamp="default")
namespace bench_tu_14189 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14189>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14189
