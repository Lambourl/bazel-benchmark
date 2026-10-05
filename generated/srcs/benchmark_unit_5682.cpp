#include "bench/fib.hpp"

// RE Benchmark TU 5682 of 20000 (depth=28, stamp="default")
namespace bench_tu_5682 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5682>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5682
