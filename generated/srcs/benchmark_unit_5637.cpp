#include "bench/fib.hpp"

// RE Benchmark TU 5637 of 20000 (depth=28, stamp="default")
namespace bench_tu_5637 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5637>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5637
