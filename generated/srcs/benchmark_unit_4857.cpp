#include "bench/fib.hpp"

// RE Benchmark TU 4857 of 20000 (depth=28, stamp="default")
namespace bench_tu_4857 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4857>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4857
