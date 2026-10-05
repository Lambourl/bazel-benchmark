#include "bench/fib.hpp"

// RE Benchmark TU 1288 of 20000 (depth=28, stamp="default")
namespace bench_tu_1288 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1288>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1288
