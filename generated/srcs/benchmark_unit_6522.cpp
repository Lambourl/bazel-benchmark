#include "bench/fib.hpp"

// RE Benchmark TU 6522 of 20000 (depth=28, stamp="default")
namespace bench_tu_6522 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6522>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6522
