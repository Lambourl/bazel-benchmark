#include "bench/fib.hpp"

// RE Benchmark TU 3244 of 20000 (depth=28, stamp="default")
namespace bench_tu_3244 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3244>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3244
