#include "bench/fib.hpp"

// RE Benchmark TU 17412 of 20000 (depth=28, stamp="default")
namespace bench_tu_17412 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17412>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17412
