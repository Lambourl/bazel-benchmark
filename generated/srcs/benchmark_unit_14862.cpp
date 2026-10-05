#include "bench/fib.hpp"

// RE Benchmark TU 14862 of 20000 (depth=28, stamp="default")
namespace bench_tu_14862 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14862>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14862
