#include "bench/fib.hpp"

// RE Benchmark TU 1939 of 20000 (depth=28, stamp="default")
namespace bench_tu_1939 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1939>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1939
