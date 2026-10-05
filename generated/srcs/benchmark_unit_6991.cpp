#include "bench/fib.hpp"

// RE Benchmark TU 6991 of 20000 (depth=28, stamp="default")
namespace bench_tu_6991 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6991>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6991
