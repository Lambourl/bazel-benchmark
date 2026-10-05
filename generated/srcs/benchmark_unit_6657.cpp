#include "bench/fib.hpp"

// RE Benchmark TU 6657 of 20000 (depth=28, stamp="default")
namespace bench_tu_6657 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6657>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6657
