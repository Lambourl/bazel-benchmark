#include "bench/fib.hpp"

// RE Benchmark TU 16151 of 20000 (depth=28, stamp="default")
namespace bench_tu_16151 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16151>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16151
