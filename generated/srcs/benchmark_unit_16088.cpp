#include "bench/fib.hpp"

// RE Benchmark TU 16088 of 20000 (depth=28, stamp="default")
namespace bench_tu_16088 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16088>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16088
