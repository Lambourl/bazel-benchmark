#include "bench/fib.hpp"

// RE Benchmark TU 13673 of 20000 (depth=28, stamp="default")
namespace bench_tu_13673 {
constexpr unsigned long long result = ::bench::slow_fib<28, 13673>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_13673
