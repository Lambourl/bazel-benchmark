#include "bench/fib.hpp"

// RE Benchmark TU 11093 of 20000 (depth=28, stamp="default")
namespace bench_tu_11093 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11093>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11093
