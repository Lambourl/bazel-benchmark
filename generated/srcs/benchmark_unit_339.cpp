#include "bench/fib.hpp"

// RE Benchmark TU 339 of 20000 (depth=28, stamp="default")
namespace bench_tu_339 {
constexpr unsigned long long result = ::bench::slow_fib<28, 339>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_339
