#include "bench/fib.hpp"

// RE Benchmark TU 989 of 20000 (depth=28, stamp="default")
namespace bench_tu_989 {
constexpr unsigned long long result = ::bench::slow_fib<28, 989>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_989
