#include "bench/fib.hpp"

// RE Benchmark TU 4414 of 20000 (depth=28, stamp="default")
namespace bench_tu_4414 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4414>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4414
