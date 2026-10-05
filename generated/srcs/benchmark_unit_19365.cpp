#include "bench/fib.hpp"

// RE Benchmark TU 19365 of 20000 (depth=28, stamp="default")
namespace bench_tu_19365 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19365>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19365
