#include "bench/fib.hpp"

// RE Benchmark TU 1145 of 20000 (depth=28, stamp="default")
namespace bench_tu_1145 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1145>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1145
