#include "bench/fib.hpp"

// RE Benchmark TU 7094 of 20000 (depth=28, stamp="default")
namespace bench_tu_7094 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7094>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7094
